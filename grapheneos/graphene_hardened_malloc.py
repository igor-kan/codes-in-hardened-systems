"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 82."""

def spec_graphene_hardened_malloc_82() -> dict:
    return {"system": "GrapheneOS", "spec_id": 82, "quarantine_slabs": 3, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_82():
    s = spec_graphene_hardened_malloc_82()
    assert s["spec_id"] == 82
