"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 1144."""

def spec_graphene_hardened_malloc_1144() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1144, "quarantine_slabs": 9, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_1144():
    s = spec_graphene_hardened_malloc_1144()
    assert s["spec_id"] == 1144
