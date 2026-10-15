"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 322."""

def spec_graphene_hardened_malloc_322() -> dict:
    return {"system": "GrapheneOS", "spec_id": 322, "quarantine_slabs": 3, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_322():
    s = spec_graphene_hardened_malloc_322()
    assert s["spec_id"] == 322
